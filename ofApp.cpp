#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(0, 0, 0);
    ofSetFrameRate(60);
    
    /*
    light.setDirectional();
    light.setPosition(ofVec3f(10.0, 50.0, 100.0));
    light.setAmbientColor(ofFloatColor(0.5, 0.5, 1.0));
    light.setDiffuseColor(ofFloatColor(0.5, 0.5, 1.0));
    light.setSpecularColor(ofFloatColor(0.0, 0.5, 1.0));
    light.lookAt(ofVec3f(0.0));
    light.enable();
    ofEnableLighting();
     */
    
    //material.setColors(ofFloatColor(0.5, 0.5, 1.0), ofFloatColor(0.5, 0.5, 1.0), ofFloatColor(0.5, 0.5, 1.0), ofFloatColor(0.5, 0.5, 1.0));
    
    material.begin();
    
    ofEnableDepthTest();
    
    angle1 = angle2 = angle3 = angle4 = angle5 = angle6 = angle7 = angle8 = angle9 = 0.0;
    angle10 = angle11 = angle12 = angle13 = angle14 = angle15 = angle16 = angle17 = 0.0;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    //自転   調べていい感じに割りました
    angle1 += 1.0;
    angle2 += 2.35;
    angle3 += 9.72;
    angle4 += 0.04;
    angle5 += 0.04;
    angle6 += 0.02;
    angle7 += 0.02;
    angle8 += 0.03;
    angle9 += 0.03;
    
    //公転　　　調べていい感じに割りました
    
    angle10 = angle10 - (0.47);
    angle11 = angle11 - (0.35);
    angle12 = angle12 - (0.30);
    angle13 = angle13 - (0.24);
    angle14 = angle14 - (0.13);
    angle15 = angle15 - (0.1);
    angle16 = angle16 - (0.07);
    angle17 = angle17 - (0.05);
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //ofSetColor(255, 255, 255);
    
    camera.begin();
    
    ofPushMatrix();
        ofTranslate(0, 0.0);
        ofRotateY(angle1);
        //ofDrawBox(0, 0, 0, 100);
        ofSetColor(198,55,0);
        ofDrawSphere(0.0, 0.0, 0.0, 280.0);
        //ofDrawRectangle(0.0, 0.0, 100.0, 100.0);
        //ofDrawCone(0.0, 0.0, 0.0, 100, 100);
        //ofDrawCone(0, 0, 0, 500.0, 0.0);
        /*ofDrawCircle(0, 0, 0, 312);
        ofDrawCircle(0, 0, 0, 292);
        ofDrawCircle(0, 0, 0, 292);
        ofDrawCircle(0, 0, 0, 292);
        ofDrawCircle(0, 0, 0, 292);
        ofDrawCircle(0, 0, 0, 292);
        ofDrawCircle(0, 0, 0, 292);
         ofDrawCircle(0, 0, 0, 292);*/
    ofPopMatrix();
    
    
    //色も画像からRGBを指定しました
    
    
    
    ofPushMatrix();
        ofRotateY(angle10);
        ofPushMatrix();
            ofTranslate(292, 0.0);
            ofRotateY(angle2);
            //ofDrawBox(0, 0, 0, 100);
            ofSetColor(146,139,170);
            ofDrawSphere(0.0, 0.0, 0.0, 1.0);
        ofPopMatrix();
    ofPopMatrix();
    
    ofPushMatrix();
        ofRotateY(angle11);
        ofPushMatrix();
            ofTranslate(312, 0.0);
            ofRotateY(angle3);
            //ofDrawBox(0, 0, 0, 100);
            ofSetColor(240,141,2);
            ofDrawSphere(0.0, 0.0, 0.0, 2.4);
        ofPopMatrix();
    ofPopMatrix();
    
    ofPushMatrix();
    ofRotateY(angle12);
    ofPushMatrix();
    ofTranslate(342, 0.0);
    ofRotateY(angle4);
    //ofDrawBox(0, 0, 0, 100);
    ofSetColor(22,122,184);
    ofDrawSphere(0.0, 0.0, 0.0, 2.4);
    ofPopMatrix();
    ofPopMatrix();
    
    ofPushMatrix();
    ofRotateY(angle13);
    ofPushMatrix();
    ofTranslate(388, 0.0);
    ofRotateY(angle5);
    //ofDrawBox(0, 0, 0, 100);
    ofSetColor(249,139,72);
    ofDrawSphere(0.0, 0.0, 0.0, 1.4);
    ofPopMatrix();
    ofPopMatrix();
    
    
    ofPushMatrix();
    ofRotateY(angle14);
    ofPushMatrix();
    ofTranslate(538, 0.0);
    ofRotateY(angle6);
    //ofDrawBox(0, 0, 0, 100);
    ofSetColor(145,119,96);
    ofDrawSphere(0.0, 0.0, 0.0, 28.0);
    ofPopMatrix();
    ofPopMatrix();
    
    
    
    ofPushMatrix();
    ofRotateY(angle15);
    ofPushMatrix();
    ofTranslate(818, 0.0);
    ofRotateY(angle7);
    //ofDrawBox(0, 0, 0, 100);
    ofSetColor(223,192,125);
    ofDrawSphere(0.0, 0.0, 0.0, 24.0);
    ofPopMatrix();
    ofPopMatrix();
    
    
    
    ofPushMatrix();
    ofRotateY(angle16);
    ofPushMatrix();
    ofTranslate(1398, 0.0);
    ofRotateY(angle8);
    //ofDrawBox(0, 0, 0, 100);
    ofSetColor(81,217,239);
    ofDrawSphere(0.0, 0.0, 0.0, 10.2);
    ofPopMatrix();
    ofPopMatrix();
    
    ofPushMatrix();
    ofRotateY(angle17);
    ofPushMatrix();
    ofTranslate(2298, 0.0);
    ofRotateY(angle9);
    //ofDrawBox(0, 0, 0, 100);
    ofSetColor(72,120,254);
    ofDrawSphere(0.0, 0.0, 0.0, 9.8);
    ofPopMatrix();
    ofPopMatrix();
    
    
    /*rotation = rotation + 10;
    if(rotation >= 360.0) rotation = 0.0;
    
    ofRotateX(rotation);
    ofRotateY(rotation);
    ofRotateZ(rotation);
    */
    camera.end();
    
    ofDrawBitmapString(ofToString(ofGetFrameRate()), 20, ofGetHeight()-20);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
