import QtQuick 2.5
import QtQuick.Controls 1.4

Rectangle {
    id: rectangle1
    //anchors.fill: parent

    width: 350
    height: 800

    Row {
        id: buttonBar
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 1
        spacing: 1

    }

    Column {

        anchors.horizontalCenter: parent.horizontalCenter
        spacing: 20

        Row {
            spacing: 25

            Button {
                width: 100
                text: "предыдущий"
            }

            Text {
                text: "месяц год"
            }

            Button {
                width: 100
                text: "следующий"
            }
        }

        Row {
            anchors.horizontalCenter: parent.horizontalCenter
            spacing: 50

            Text{
                text:"День"
            }
            Text{
                text:"Часы"
            }
            Text{
                text:"Статус"
            }
        }

        ListView {
                width: 180;
                height: 200
                model: _this.list

                delegate: Text { text: modelData; font.pixelSize: 18 }
        }

        Row {
            Button {
                id: button
                text: qsTr("click")


                MouseArea {
                    anchors.fill: parent
                    onClicked: _this.allTaskShow()
                }
            }
        }

   }
}
