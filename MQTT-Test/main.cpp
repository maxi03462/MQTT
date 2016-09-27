#include <QCoreApplication>
#include <mosquitto.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    struct mosquitto *mosq;
    char clientid[24];

    qInfo("Listo para crear");

    mosq = mosquitto_new(clientid, true, NULL);
    mosquitto_connect(mosq, "localhost", 1883,1500);
    mosquitto_publish(mosq,NULL,"Test",10,"Hola Mundo", 0, true);

    qInfo("Enviado");

    a.closingDown();

    return a.exec();
}

