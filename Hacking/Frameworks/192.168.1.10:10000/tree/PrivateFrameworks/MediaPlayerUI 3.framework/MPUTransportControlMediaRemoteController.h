/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUTransportControlMediaRemoteController : NSObject {
    bool  _advertisement;
    NSArray * _allowedTransportControlTypes;
    bool  _alwaysLive;
    <MPUTransportControlMediaRemoteControllerDelegate> * _delegate;
    double  _displayedSkipBackwardInterval;
    double  _displayedSkipForwardInterval;
    long long  _likeControlPresentationStyle;
    long long  _likedState;
    bool  _nowPlayingAppIsRunning;
    NSDictionary * _nowPlayingInfo;
    bool  _playing;
    long long  _repeatType;
    unsigned int  _runningLongPressCommand;
    bool  _sharingEnabled;
    long long  _shuffleType;
    NSArray * _supportedCommands;
    unsigned long long  _transportControlsCount;
    MPUTransportControlsView * _transportControlsView;
}

@property (getter=isAdvertisement, nonatomic, readonly) bool advertisement;
@property (nonatomic, copy) NSArray *allowedTransportControlTypes;
@property (getter=isAlwaysLive, nonatomic, readonly) bool alwaysLive;
@property (nonatomic) <MPUTransportControlMediaRemoteControllerDelegate> *delegate;
@property (nonatomic, readonly) double displayedSkipBackwardInterval;
@property (nonatomic, readonly) double displayedSkipForwardInterval;
@property (nonatomic, readonly) long long likeControlPresentationStyle;
@property (nonatomic, readonly) long long likedState;
@property (nonatomic) bool nowPlayingAppIsRunning;
@property (nonatomic, copy) NSDictionary *nowPlayingInfo;
@property (getter=isPlaying, nonatomic) bool playing;
@property (nonatomic, readonly) long long repeatType;
@property (getter=isSharingEnabled, nonatomic, readonly) bool sharingEnabled;
@property (nonatomic, readonly) long long shuffleType;
@property (nonatomic, copy) NSArray *supportedCommands;
@property (nonatomic, readonly) bool supportsStopButNotPause;
@property (nonatomic) unsigned long long transportControlsCount;
@property (nonatomic, readonly) MPUTransportControlsView *transportControlsView;

// Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI

- (void).cxx_destruct;
- (id)_commandOptionsForFeedbackOrPurchase;
- (void)_completeInitializationWithTransportControlsView:(id)arg1;
- (bool)_isSupportedCommandActiveForMediaRemoteCommand:(unsigned int)arg1;
- (id)_nowPlayingInfoValueForMediaRemoteNowPlayingInfoKey:(struct __CFString { }*)arg1;
- (void)_presentFirstLoveAlertIfNeeded;
- (void)_presentLikeBanActionSheetForCommand:(unsigned int)arg1;
- (void)_updateForSupportedCommandsChange;
- (void)_updateLikedState;
- (id)allowedTransportControlTypes;
- (void)cancelRunningLongPressCommand;
- (id)delegate;
- (double)displayedSkipBackwardInterval;
- (double)displayedSkipForwardInterval;
- (long long)handleLongPressBeginOnControlType:(long long)arg1;
- (long long)handleLongPressEndOnControlType:(long long)arg1;
- (void)handlePushingMediaRemoteCommand:(unsigned int)arg1;
- (long long)handleTapOnControlType:(long long)arg1;
- (id)init;
- (id)initWithTransportControlsView:(id)arg1 allowedTransportControlTypes:(id)arg2;
- (id)initWithTransportControlsView:(id)arg1 transportControlsCount:(unsigned long long)arg2;
- (bool)isAdvertisement;
- (bool)isAlwaysLive;
- (bool)isPlaying;
- (bool)isSharingEnabled;
- (long long)likeControlPresentationStyle;
- (long long)likedState;
- (bool)nowPlayingAppIsRunning;
- (id)nowPlayingInfo;
- (long long)repeatType;
- (void)setAllowedTransportControlTypes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNowPlayingAppIsRunning:(bool)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setSupportedCommands:(id)arg1;
- (void)setTransportControlsCount:(unsigned long long)arg1;
- (long long)shuffleType;
- (id)supportedCommands;
- (bool)supportsStopButNotPause;
- (unsigned long long)transportControlsCount;
- (id)transportControlsView;

// Image: /System/Library/AccessibilityBundles/MediaPlayerUIFramework.axbundle/MediaPlayerUIFramework

+ (Class)safeCategoryBaseClass;

- (void)_updateForNowPlayingInfoChange;

@end
