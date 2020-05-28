#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
    ofEasyCam camera; //examine, scale and pan are included.
    ofLight light;
    ofMaterial material;
    float angle1;
    float angle2;
    float angle3;
    float angle4;
    float angle5;
    float angle6;
    float angle7;
    float angle8;
    float angle9;
    float angle10;
    float angle11;
    float angle12;
    float angle13;
    float angle14;
    float angle15;
    float angle16;
    float angle17;
    //float rotation = 0.0;
    
};
