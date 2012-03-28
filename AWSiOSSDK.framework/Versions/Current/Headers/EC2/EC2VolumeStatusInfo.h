/*
 * Copyright 2010-2012 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#import "EC2VolumeStatusDetails.h"



/**
 * Volume Status Info
 *
 * \ingroup EC2
 */

@interface EC2VolumeStatusInfo:NSObject

{
    NSString       *status;
    NSMutableArray *details;
}




/**
 * Default constructor for a new  object.  Callers should use the
 * property methods to initialize this object after creating it.
 */
-(id)init;

/**
 * The value of the Status property for this object.
 */
@property (nonatomic, retain) NSString *status;

/**
 * The value of the Details property for this object.
 */
@property (nonatomic, retain) NSMutableArray *details;

/**
 * Adds a single object to details.
 * This function will alloc and init details if not already done.
 */
-(void)addDetail:(EC2VolumeStatusDetails *)detailObject;

/**
 * Returns a string representation of this object; useful for testing and
 * debugging.
 *
 * @return A string representation of this object.
 */
-(NSString *)description;


@end
