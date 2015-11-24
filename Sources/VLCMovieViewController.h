/*****************************************************************************
 * VLCMovieViewController.h
 * VLC for iOS
 *****************************************************************************
 * Copyright (c) 2013-2015 VideoLAN. All rights reserved.
 * $Id$
 *
 * Authors: Felix Paul Kühne <fkuehne # videolan.org>
 *          Gleb Pinigin <gpinigin # gmail.com>
 *
 * Refer to the COPYING file of the official project for license.
 *****************************************************************************/

#import <MediaPlayer/MediaPlayer.h>
#import "VLCFrostedGlasView.h"
#import "VLCPlaybackController.h"

@class OBSlider;
@class VLCStatusLabel;
@class VLCHorizontalSwipeGestureRecognizer;
@class VLCVerticalSwipeGestureRecognizer;
@class VLCTimeNavigationTitleView;

@interface VLCMovieViewController : UIViewController <UIActionSheetDelegate, VLCPlaybackControllerDelegate>

@property (nonatomic, strong) IBOutlet UIView *movieView;
@property (nonatomic, strong) IBOutlet UIBarButtonItem *backButton;
@property (nonatomic, strong) IBOutlet VLCTimeNavigationTitleView *timeNavigationTitleView;
@property (nonatomic, strong) IBOutlet UIButton *playPauseButton;
@property (nonatomic, strong) IBOutlet UIButton *playPauseButtonLandscape;
@property (nonatomic, strong) IBOutlet UIButton *bwdButton;
@property (nonatomic, strong) IBOutlet UIButton *bwdButtonLandscape;
@property (nonatomic, strong) IBOutlet UIButton *fwdButton;
@property (nonatomic, strong) IBOutlet UIButton *fwdButtonLandscape;
@property (nonatomic, strong) IBOutlet UIButton *trackSwitcherButton;
@property (nonatomic, strong) IBOutlet UIButton *trackSwitcherButtonLandscape;
@property (nonatomic, strong) IBOutlet UIButton *sleepTimerButton;
@property (nonatomic, strong) IBOutlet UINavigationBar *toolbar;
@property (nonatomic, strong) IBOutlet VLCFrostedGlasView *controllerPanel;
@property (nonatomic, strong) IBOutlet VLCFrostedGlasView *controllerPanelLandscape;
@property (nonatomic, strong) IBOutlet VLCStatusLabel *statusLabel;
@property (nonatomic, strong) IBOutlet MPVolumeView *volumeView;
@property (nonatomic, strong) IBOutlet MPVolumeView *volumeViewLandscape;

@property (nonatomic, strong) IBOutlet UIView *playingExternallyView;
@property (nonatomic, strong) IBOutlet UILabel *playingExternallyTitle;
@property (nonatomic, strong) IBOutlet UILabel *playingExternallyDescription;

@property (nonatomic, strong) IBOutlet VLCFrostedGlasView *videoFilterView;
@property (nonatomic, strong) IBOutlet UIButton *videoFilterButton;
@property (nonatomic, strong) IBOutlet UIButton *videoFilterButtonLandscape;
@property (nonatomic, strong) IBOutlet UILabel *hueLabel;
@property (nonatomic, strong) IBOutlet UISlider *hueSlider;
@property (nonatomic, strong) IBOutlet UILabel *contrastLabel;
@property (nonatomic, strong) IBOutlet UISlider *contrastSlider;
@property (nonatomic, strong) IBOutlet UILabel *brightnessLabel;
@property (nonatomic, strong) IBOutlet UISlider *brightnessSlider;
@property (nonatomic, strong) IBOutlet UILabel *saturationLabel;
@property (nonatomic, strong) IBOutlet UISlider *saturationSlider;
@property (nonatomic, strong) IBOutlet UILabel *gammaLabel;
@property (nonatomic, strong) IBOutlet UISlider *gammaSlider;
@property (nonatomic, strong) IBOutlet UIButton *resetVideoFilterButton;

@property (nonatomic, strong) IBOutlet VLCFrostedGlasView *playbackSpeedView;
@property (nonatomic, strong) IBOutlet UIButton *playbackSpeedButton;
@property (nonatomic, strong) IBOutlet UIButton *playbackSpeedButtonLandscape;
@property (nonatomic, strong) IBOutlet UISlider *playbackSpeedSlider;
@property (nonatomic, strong) IBOutlet UILabel *playbackSpeedLabel;
@property (nonatomic, strong) IBOutlet UILabel *playbackSpeedIndicator;
@property (nonatomic, strong) IBOutlet UISlider *audioDelaySlider;
@property (nonatomic, strong) IBOutlet UILabel *audioDelayLabel;
@property (nonatomic, strong) IBOutlet UILabel *audioDelayIndicator;
@property (nonatomic, strong) IBOutlet UISlider *spuDelaySlider;
@property (nonatomic, strong) IBOutlet UILabel *spuDelayLabel;
@property (nonatomic, strong) IBOutlet UILabel *spuDelayIndicator;
@property (nonatomic, strong) IBOutlet UIButton *moreActionsButton;

@property (nonatomic, strong) IBOutlet VLCFrostedGlasView *scrubIndicatorView;
@property (nonatomic, strong) IBOutlet UILabel *currentScrubSpeedLabel;
@property (nonatomic, strong) IBOutlet UILabel *scrubHelpLabel;

@property (nonatomic, strong) IBOutlet UILabel *artistNameLabel;
@property (nonatomic, strong) IBOutlet UILabel *albumNameLabel;
@property (nonatomic, strong) IBOutlet UILabel *trackNameLabel;
@property (nonatomic, strong) IBOutlet UIImageView *artworkImageView;

@property (nonatomic, weak) IBOutlet VLCPlaybackController *playbackController;

- (IBAction)closePlayback:(id)sender;
- (IBAction)minimizePlayback:(id)sender;

- (IBAction)positionSliderAction:(id)sender;
- (IBAction)positionSliderTouchDown:(id)sender;
- (IBAction)positionSliderTouchUp:(id)sender;
- (IBAction)positionSliderDrag:(id)sender;
- (IBAction)toggleTimeDisplay:(id)sender;

- (IBAction)playPause;
- (IBAction)backward:(id)sender;
- (IBAction)forward:(id)sender;
- (IBAction)switchTrack:(id)sender;
- (IBAction)sleepTimer:(id)sender;
- (IBAction)moreActions:(id)sender;

- (IBAction)videoFilterToggle:(id)sender;
- (IBAction)videoFilterSliderAction:(id)sender;

- (IBAction)playbackSliderAction:(id)sender;
- (IBAction)videoDimensionAction:(id)sender;

- (void)toggleRepeatMode;
- (void)toggleEqualizer;
- (void)toggleUILock;
- (void)toggleChapterAndTitleSelector;
- (void)hideMenu;

- (BOOL)rotationIsDisabled;

- (void)setControlsHidden:(BOOL)hidden animated:(BOOL)animated;
- (void)showStatusMessage:(NSString *)statusMessage;

@end
