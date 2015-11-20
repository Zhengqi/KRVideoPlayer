//
//  KRVideoPlayerController.h
//  KRKit
//
//  Created by aidenluo on 5/23/15.
//  Copyright (c) 2015 36kr. All rights reserved.
//

@import MediaPlayer;

@protocol KRViedoPlayerDelegate
- (void)videoPlaybackEnded;
@end

@interface KRVideoPlayerController : MPMoviePlayerController

@property (assign, nonatomic) id _delegate;
@property (nonatomic, copy)void(^dimissCompleteBlock)(void);
@property (nonatomic, assign) CGRect frame;

- (instancetype)initWithFrame:(CGRect)frame;
- (void)showInWindow;
- (void)dismiss;

@end