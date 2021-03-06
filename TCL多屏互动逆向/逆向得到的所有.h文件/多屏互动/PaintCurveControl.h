//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UIImageView;

@interface PaintCurveControl : UIView
{
    UIImageView *_penImageView;
    struct CGImage *_cgImage;
    unsigned int _xPosition;
    _Bool _refresh;
    struct CGPoint _prePoint;
    NSTimer *_timeRefresh;
}

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawCurve:(struct CGContext *)arg1;
- (void)saveScreen:(struct CGContext *)arg1;
- (void)onTimer;
- (void)start;
- (void)startOnMainThread;
- (void)stopOnMainThread;
- (void)stop;
- (id)initWithFrame:(struct CGRect)arg1;

@end

