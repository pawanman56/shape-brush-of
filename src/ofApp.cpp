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
    int maxRadius = 75;
    int radiusStepSize = 5;
    int alpha = 3;
    int maxOffsetDistance = 100;

    // drawing smaller circles over smaller circles, as a layer, increases the opaqueness
    for (int r = maxRadius; r > 0; r -= radiusStepSize) {
      float angle = ofRandom(ofDegToRad(360.0));
      float distance = ofRandom(maxOffsetDistance);
      float xOffset = cos(angle) * distance;
      float yOffset = sin(angle) * distance;

      ofColor myPurple(119, 69, 214, alpha);
      ofColor myYellow(241, 196, 15, alpha);
      ofColor inBetween = myPurple.getLerped(myYellow, ofRandom(1.0));

      ofSetColor(inBetween);
      ofDrawCircle(ofGetMouseX() + xOffset, ofGetMouseY() + yOffset, r);
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
