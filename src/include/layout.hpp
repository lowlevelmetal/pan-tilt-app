/*
 * Matthew Todd Geiger
 * layout.hpp
 */

#include "macros.hpp"

#include <QObject>
#include <QSlider>
#include <QLabel>

class Layout : public QObject {
    Q_OBJECT
    
    public:
        explicit Layout(QLabel* parent);
        virtual ~Layout();
    
    private:
        // Rotation objects
        QSlider* xRotationSlider;
        QLabel* xRotationLabel;
        QSlider* yRotationSlider;
        QLabel* yRotationLabel;

        // Camera effects objects
        QSlider* focusSlider;
        QSlider* zoomSlider;
        QSlider* apertureSlider;
        QSlider* exposureSlider;
        QSlider* whitebalanceSlider;
        QSlider* gainSlider;
        
        QLabel* focusLabel;
        QLabel* zoomLabel;
        QLabel* apertureLabel;
        QLabel* exposureLabel;
        QLabel* whitebalanceLabel;
        QLabel* gainLabel;
};