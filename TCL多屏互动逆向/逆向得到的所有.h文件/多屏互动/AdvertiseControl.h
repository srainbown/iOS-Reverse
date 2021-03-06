//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSTimer;

@interface AdvertiseControl : UIView
{
    NSMutableArray *_itemsViewArray;
    int _index;
    float _everyAdvertiseShowSecond;
    NSTimer *_timer;
}

- (void)dealloc;
- (void)clearAdvertiseItem;
- (void)addAdvertiseItem:(id)arg1;
- (void)stop;
- (void)start;
- (void)setEveryAdvertiseShowTime:(float)arg1;
- (void)onTimer:(id)arg1;
- (void)startAnimation;
- (id)getAnimation:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

