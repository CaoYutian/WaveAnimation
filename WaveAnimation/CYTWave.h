//
//  CYTWave.h
//  Wave
//
//  Created by 。。。 on 2017/3/27.
//  Copyright © 2017年 isofoo. All rights reserved.
//  Github: https://github.com/CaoYutian/Wave.git

#import <UIKit/UIKit.h>

@interface CYTWave : UIView

@property (assign, nonatomic) CGFloat angularSpeed;
@property (assign, nonatomic) CGFloat waveSpeed;
@property (assign, nonatomic) NSTimeInterval waveTime;
@property (strong, nonatomic) UIColor *waveColor;

+ (instancetype)addToView:(UIView *)view withFrame:(CGRect)frame;

- (BOOL)wave;
- (void)stop;

@end
