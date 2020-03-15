#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  ofSetBackgroundAuto(false);
  ofBackground(0);
  ofSetFrameRate(60);
  ofEnableAlphaBlending();
  //ofDisableAlphaBlending();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
  if (ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)) {
    ofVec2f mousePos(ofGetMouseX(), ofGetMouseY());

    // define triangle at origin (0, 0) that points to the right
    ofVec2f p1(0, 25.0);
    ofVec2f p2(100, 0);
    ofVec2f p3(0, -25.0);

    // shift the triangle to the mouse position
    p1 += mousePos;
    p2 += mousePos;
    p3 += mousePos;

    ofSetColor(255, 50);
    ofDrawTriangle(p1, p2, p3);
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
