#ifndef __MODEL_JSON_H__
#define __MODEL_JSON_H__

const char recognition_model_string_json[] = {"{\"NumModels\":1,\"ModelIndexes\":{\"0\":\"PIPELINE_1_RANK_4\"},\"ModelDescriptions\":[{\"Name\":\"PIPELINE_1_RANK_4\",\"ClassMaps\":{\"1\":\"BackgroundNoise\",\"2\":\"InsectSound\",\"0\":\"Unknown\"},\"ModelType\":\"DecisionTreeEnsemble\",\"FeatureFunctions\":[\"MFCC\",\"MFCC\",\"MFCC\",\"PowerSpectrum\",\"AbsoluteAreaofLowFrequency\"]}]}"};

int recognition_model_string_json_len = sizeof(recognition_model_string_json);

#endif /* __MODEL_JSON_H__ */
