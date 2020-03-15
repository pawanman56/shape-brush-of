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
    int numLines = 30;
    int minRadius = 25;
    int maxRadius = 100;

    for (int i = 0; i < numLines; i++) {
      float angle = ofRandom(ofDegToRad(360.0));
      float distance = ofRandom(minRadius, maxRadius);
      float xOffset = cos(angle) * distance;
      float yOffset = sin(angle) * distance;
      float alpha = ofMap(distance, minRadius, maxRadius, 50, 0);  //make shorter lines more opaque

      ofColor myYellow(241, 196, 15, alpha);
      ofColor myOrange(211, 84, 0, alpha);
      ofColor inBetween = myYellow.getLerped(myOrange, ofRandom(1.0));

      ofSetColor(inBetween);
      ofDrawLine(ofGetMouseX(), ofGetMouseY(), ofGetMouseX() + xOffset, ofGetMouseY() + yOffset);
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
