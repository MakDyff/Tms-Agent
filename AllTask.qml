import QtQuick 2.5
import QtQuick.Controls 1.4

Rectangle {
    id: root
    width: 350;
    height: 900

    Grid {
        anchors.fill: parent
        rows: 3
        id: grid

        Grid {
            columns: 2

            Text{
                text: qsTr("AllTask")
                styleColor: "#ed0000"
                font.pointSize: 24;
                style: Text.Outline;
            }

            Text{
                text: qsTr("Jurnal")
                font.pointSize: 24;
                style: Text.Outline;
                styleColor: "#090808"
            }
        }

        Button {
            id: button
            text: qsTr("click")


            MouseArea {
                anchors.fill: parent
                onClicked: allTask.cppSlot()
            }
        }

        Text {
            id: name
            text: qsTr("male")

        }

        TextEdit {

        }

    }
}
