//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class NSArray;

@interface WKVideoFilterScrollView : UIScrollView
{
    long long _currentTag;
    NSArray *_filterArray;
    id <WKVideoFilterScrollViewDelegate> _clickDelegate;
}

@property(nonatomic) __weak id <WKVideoFilterScrollViewDelegate> clickDelegate; // @synthesize clickDelegate=_clickDelegate;
- (void).cxx_destruct;
- (void)resetFilterButtonStatus;
- (void)titleButtonClicked:(id)arg1;
- (void)setVideoFilterParamArray:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

