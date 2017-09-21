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


    ListModel {
            id: animalsModel
            ListElement { name: "Ant"; size: "Tiny" }
            ListElement { name: "Flea"; size: "Tiny" }
            ListElement { name: "Parrot"; size: "Small" }
            ListElement { name: "Guinea pig"; size: "Small" }
            ListElement { name: "Rat"; size: "Small" }
            ListElement { name: "Butterfly"; size: "Small" }
            ListElement { name: "Dog"; size: "Medium" }
            ListElement { name: "Cat"; size: "Medium" }
            ListElement { name: "Pony"; size: "Medium" }
            ListElement { name: "Koala"; size: "Medium" }
            ListElement { name: "Horse"; size: "Large" }
            ListElement { name: "Tiger"; size: "Large" }
            ListElement { name: "Giraffe"; size: "Large" }
            ListElement { name: "Elephant"; size: "Huge" }
            ListElement { name: "Whale"; size: "Huge" }
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
                model: animalsModel

                delegate: Text { text: name; font.pixelSize: 18 }
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
