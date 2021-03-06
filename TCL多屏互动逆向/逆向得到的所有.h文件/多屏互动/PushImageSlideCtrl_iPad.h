//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PushImageCtrl.h"

@class UIButton, UILabel;

@interface PushImageSlideCtrl_iPad : PushImageCtrl
{
    UIButton *_leftButton;
    UIButton *_rightButton;
    UILabel *_namelab;
    id temp;
    id pageDelegate;
}

@property(nonatomic) id pageDelegate; // @synthesize pageDelegate;
- (void)setTemp:(id)arg1;
- (id)temp;
- (void)dealloc;
- (void)thumbnailPickerView:(id)arg1 didSelectImageWithIndex:(unsigned int)arg2;
- (id)thumbnailPickerView:(id)arg1 imageAtIndex:(unsigned int)arg2;
- (unsigned int)numberOfImagesForThumbnailPickerView:(id)arg1;
- (struct CGRect)getScrollViewRect;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (int)getShowImagePointY:(int)arg1;
- (int)getScrollerViewHeight;
- (struct CGSize)resizeImageRect:(id)arg1;
- (int)dependImageWidth;
- (void)rightPadBtn:(id)arg1;
- (void)leftPadBtn:(id)arg1;
- (void)timeMethod;
- (void)scrollViewTouch:(id)arg1;
- (void)backPadBtn:(id)arg1;
- (void)stopPadBtn:(id)arg1;
- (void)abstraceControlPlayStatus:(int)arg1;
- (void)CreatAlert:(id)arg1 withmessage:(id)arg2;
- (void)abstraceControlPicureExit;
- (void)abstractControlTransportActions:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

