#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  ofSetBackgroundAuto(false);
  ofBackground(0);
  ofSetFrameRate(60);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
  if (ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)) {
    ofSetRectMode(OF_RECTMODE_CENTER);
    int numRect = 10;

    for (int r = 0; r < numRect; r++) {
      ofSetColor(ofRandom(50, 255));
      float width = ofRandom(5, 20);
      float height = ofRandom(5, 20);

      //For rectangle bursts
      //float xOffset = ofRandom(-40, 40);
      //float yOffset = ofRandom(-40, 40);

      //For circular brush bursts

      // Formula for converting from polar to cartesian coordinates
      // x = cos(polar angle) * (polar distance)
      // y = sin(polar angle) * (polar distance)
      // angle must be in radian for the formula
  
      float angle = ofRandom(ofDegToRad(360.0));
      float distance = ofRandom(35);

      float xOffset = cos(angle) * distance;
      float yOffset = sin(angle) * distance;
      ofDrawRectangle(ofGetMouseX() + xOffset, ofGetMouseY() + yOffset, width, height);
    }
  }

  if (ofGetMousePressed(OF_MOUSE_BUTTON_RIGHT)) {
    ofBackground(0);
  }
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
