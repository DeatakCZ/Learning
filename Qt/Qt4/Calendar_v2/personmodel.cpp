
#include "personmodel.h"

PersonModel::PersonModel(QObject *parent) : QObject{parent}
{
    QFile personFile(FILENAME);

    if(personFile.exists())
    {
        if(!personFile.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            throw "PersonModel - constructor: I cannot open the file for reading!";
        }

        QJsonParseError jsonError;

        m_jsonPersonDoc = QJsonDocument::fromJson(personFile.readAll(), &jsonError);

        while(personFile.isOpen())
        {
            personFile.close();
        }

        if(jsonError.error != QJsonParseError::NoError)
        {
            throw "Any error in file format!";
        }

        m_jsonPersonArray = m_jsonPersonDoc.array();
    }
    else
    {
        Person person;
        person.setId(1);
        person.setName("Friedrich");
        person.setSurname("Nietzsche");
        person.setBirthday(QDate(1844,10,15));

        addPerson(person);
        m_isChanged = true;
    }
}

PersonModel::~PersonModel()
{
    saveDocument();
}
