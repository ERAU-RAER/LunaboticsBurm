// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from turtlesim:srv/TeleportAbsolute.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__SRV__DETAIL__TELEPORT_ABSOLUTE__FUNCTIONS_H_
#define TURTLESIM__SRV__DETAIL__TELEPORT_ABSOLUTE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "turtlesim/msg/rosidl_generator_c__visibility_control.h"

#include "turtlesim/srv/detail/teleport_absolute__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
const rosidl_type_hash_t *
turtlesim__srv__TeleportAbsolute__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
const rosidl_runtime_c__type_description__TypeDescription *
turtlesim__srv__TeleportAbsolute__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
const rosidl_runtime_c__type_description__TypeSource *
turtlesim__srv__TeleportAbsolute__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtlesim__srv__TeleportAbsolute__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/TeleportAbsolute message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtlesim__srv__TeleportAbsolute_Request
 * )) before or use
 * turtlesim__srv__TeleportAbsolute_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
bool
turtlesim__srv__TeleportAbsolute_Request__init(turtlesim__srv__TeleportAbsolute_Request * msg);

/// Finalize srv/TeleportAbsolute message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
void
turtlesim__srv__TeleportAbsolute_Request__fini(turtlesim__srv__TeleportAbsolute_Request * msg);

/// Create srv/TeleportAbsolute message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtlesim__srv__TeleportAbsolute_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
turtlesim__srv__TeleportAbsolute_Request *
turtlesim__srv__TeleportAbsolute_Request__create();

/// Destroy srv/TeleportAbsolute message.
/**
 * It calls
 * turtlesim__srv__TeleportAbsolute_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
void
turtlesim__srv__TeleportAbsolute_Request__destroy(turtlesim__srv__TeleportAbsolute_Request * msg);

/// Check for srv/TeleportAbsolute message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
bool
turtlesim__srv__TeleportAbsolute_Request__are_equal(const turtlesim__srv__TeleportAbsolute_Request * lhs, const turtlesim__srv__TeleportAbsolute_Request * rhs);

/// Copy a srv/TeleportAbsolute message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
bool
turtlesim__srv__TeleportAbsolute_Request__copy(
  const turtlesim__srv__TeleportAbsolute_Request * input,
  turtlesim__srv__TeleportAbsolute_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
const rosidl_type_hash_t *
turtlesim__srv__TeleportAbsolute_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
const rosidl_runtime_c__type_description__TypeDescription *
turtlesim__srv__TeleportAbsolute_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
const rosidl_runtime_c__type_description__TypeSource *
turtlesim__srv__TeleportAbsolute_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtlesim__srv__TeleportAbsolute_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/TeleportAbsolute messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtlesim__srv__TeleportAbsolute_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
bool
turtlesim__srv__TeleportAbsolute_Request__Sequence__init(turtlesim__srv__TeleportAbsolute_Request__Sequence * array, size_t size);

/// Finalize array of srv/TeleportAbsolute messages.
/**
 * It calls
 * turtlesim__srv__TeleportAbsolute_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
void
turtlesim__srv__TeleportAbsolute_Request__Sequence__fini(turtlesim__srv__TeleportAbsolute_Request__Sequence * array);

/// Create array of srv/TeleportAbsolute messages.
/**
 * It allocates the memory for the array and calls
 * turtlesim__srv__TeleportAbsolute_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
turtlesim__srv__TeleportAbsolute_Request__Sequence *
turtlesim__srv__TeleportAbsolute_Request__Sequence__create(size_t size);

/// Destroy array of srv/TeleportAbsolute messages.
/**
 * It calls
 * turtlesim__srv__TeleportAbsolute_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
void
turtlesim__srv__TeleportAbsolute_Request__Sequence__destroy(turtlesim__srv__TeleportAbsolute_Request__Sequence * array);

/// Check for srv/TeleportAbsolute message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
bool
turtlesim__srv__TeleportAbsolute_Request__Sequence__are_equal(const turtlesim__srv__TeleportAbsolute_Request__Sequence * lhs, const turtlesim__srv__TeleportAbsolute_Request__Sequence * rhs);

/// Copy an array of srv/TeleportAbsolute messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
bool
turtlesim__srv__TeleportAbsolute_Request__Sequence__copy(
  const turtlesim__srv__TeleportAbsolute_Request__Sequence * input,
  turtlesim__srv__TeleportAbsolute_Request__Sequence * output);

/// Initialize srv/TeleportAbsolute message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtlesim__srv__TeleportAbsolute_Response
 * )) before or use
 * turtlesim__srv__TeleportAbsolute_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
bool
turtlesim__srv__TeleportAbsolute_Response__init(turtlesim__srv__TeleportAbsolute_Response * msg);

/// Finalize srv/TeleportAbsolute message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
void
turtlesim__srv__TeleportAbsolute_Response__fini(turtlesim__srv__TeleportAbsolute_Response * msg);

/// Create srv/TeleportAbsolute message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtlesim__srv__TeleportAbsolute_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
turtlesim__srv__TeleportAbsolute_Response *
turtlesim__srv__TeleportAbsolute_Response__create();

/// Destroy srv/TeleportAbsolute message.
/**
 * It calls
 * turtlesim__srv__TeleportAbsolute_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
void
turtlesim__srv__TeleportAbsolute_Response__destroy(turtlesim__srv__TeleportAbsolute_Response * msg);

/// Check for srv/TeleportAbsolute message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
bool
turtlesim__srv__TeleportAbsolute_Response__are_equal(const turtlesim__srv__TeleportAbsolute_Response * lhs, const turtlesim__srv__TeleportAbsolute_Response * rhs);

/// Copy a srv/TeleportAbsolute message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
bool
turtlesim__srv__TeleportAbsolute_Response__copy(
  const turtlesim__srv__TeleportAbsolute_Response * input,
  turtlesim__srv__TeleportAbsolute_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
const rosidl_type_hash_t *
turtlesim__srv__TeleportAbsolute_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
const rosidl_runtime_c__type_description__TypeDescription *
turtlesim__srv__TeleportAbsolute_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
const rosidl_runtime_c__type_description__TypeSource *
turtlesim__srv__TeleportAbsolute_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtlesim__srv__TeleportAbsolute_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/TeleportAbsolute messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtlesim__srv__TeleportAbsolute_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
bool
turtlesim__srv__TeleportAbsolute_Response__Sequence__init(turtlesim__srv__TeleportAbsolute_Response__Sequence * array, size_t size);

/// Finalize array of srv/TeleportAbsolute messages.
/**
 * It calls
 * turtlesim__srv__TeleportAbsolute_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
void
turtlesim__srv__TeleportAbsolute_Response__Sequence__fini(turtlesim__srv__TeleportAbsolute_Response__Sequence * array);

/// Create array of srv/TeleportAbsolute messages.
/**
 * It allocates the memory for the array and calls
 * turtlesim__srv__TeleportAbsolute_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
turtlesim__srv__TeleportAbsolute_Response__Sequence *
turtlesim__srv__TeleportAbsolute_Response__Sequence__create(size_t size);

/// Destroy array of srv/TeleportAbsolute messages.
/**
 * It calls
 * turtlesim__srv__TeleportAbsolute_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
void
turtlesim__srv__TeleportAbsolute_Response__Sequence__destroy(turtlesim__srv__TeleportAbsolute_Response__Sequence * array);

/// Check for srv/TeleportAbsolute message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
bool
turtlesim__srv__TeleportAbsolute_Response__Sequence__are_equal(const turtlesim__srv__TeleportAbsolute_Response__Sequence * lhs, const turtlesim__srv__TeleportAbsolute_Response__Sequence * rhs);

/// Copy an array of srv/TeleportAbsolute messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
bool
turtlesim__srv__TeleportAbsolute_Response__Sequence__copy(
  const turtlesim__srv__TeleportAbsolute_Response__Sequence * input,
  turtlesim__srv__TeleportAbsolute_Response__Sequence * output);

/// Initialize srv/TeleportAbsolute message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtlesim__srv__TeleportAbsolute_Event
 * )) before or use
 * turtlesim__srv__TeleportAbsolute_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
bool
turtlesim__srv__TeleportAbsolute_Event__init(turtlesim__srv__TeleportAbsolute_Event * msg);

/// Finalize srv/TeleportAbsolute message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
void
turtlesim__srv__TeleportAbsolute_Event__fini(turtlesim__srv__TeleportAbsolute_Event * msg);

/// Create srv/TeleportAbsolute message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtlesim__srv__TeleportAbsolute_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
turtlesim__srv__TeleportAbsolute_Event *
turtlesim__srv__TeleportAbsolute_Event__create();

/// Destroy srv/TeleportAbsolute message.
/**
 * It calls
 * turtlesim__srv__TeleportAbsolute_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
void
turtlesim__srv__TeleportAbsolute_Event__destroy(turtlesim__srv__TeleportAbsolute_Event * msg);

/// Check for srv/TeleportAbsolute message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
bool
turtlesim__srv__TeleportAbsolute_Event__are_equal(const turtlesim__srv__TeleportAbsolute_Event * lhs, const turtlesim__srv__TeleportAbsolute_Event * rhs);

/// Copy a srv/TeleportAbsolute message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
bool
turtlesim__srv__TeleportAbsolute_Event__copy(
  const turtlesim__srv__TeleportAbsolute_Event * input,
  turtlesim__srv__TeleportAbsolute_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
const rosidl_type_hash_t *
turtlesim__srv__TeleportAbsolute_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
const rosidl_runtime_c__type_description__TypeDescription *
turtlesim__srv__TeleportAbsolute_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
const rosidl_runtime_c__type_description__TypeSource *
turtlesim__srv__TeleportAbsolute_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtlesim__srv__TeleportAbsolute_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/TeleportAbsolute messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtlesim__srv__TeleportAbsolute_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
bool
turtlesim__srv__TeleportAbsolute_Event__Sequence__init(turtlesim__srv__TeleportAbsolute_Event__Sequence * array, size_t size);

/// Finalize array of srv/TeleportAbsolute messages.
/**
 * It calls
 * turtlesim__srv__TeleportAbsolute_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
void
turtlesim__srv__TeleportAbsolute_Event__Sequence__fini(turtlesim__srv__TeleportAbsolute_Event__Sequence * array);

/// Create array of srv/TeleportAbsolute messages.
/**
 * It allocates the memory for the array and calls
 * turtlesim__srv__TeleportAbsolute_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
turtlesim__srv__TeleportAbsolute_Event__Sequence *
turtlesim__srv__TeleportAbsolute_Event__Sequence__create(size_t size);

/// Destroy array of srv/TeleportAbsolute messages.
/**
 * It calls
 * turtlesim__srv__TeleportAbsolute_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
void
turtlesim__srv__TeleportAbsolute_Event__Sequence__destroy(turtlesim__srv__TeleportAbsolute_Event__Sequence * array);

/// Check for srv/TeleportAbsolute message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
bool
turtlesim__srv__TeleportAbsolute_Event__Sequence__are_equal(const turtlesim__srv__TeleportAbsolute_Event__Sequence * lhs, const turtlesim__srv__TeleportAbsolute_Event__Sequence * rhs);

/// Copy an array of srv/TeleportAbsolute messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
bool
turtlesim__srv__TeleportAbsolute_Event__Sequence__copy(
  const turtlesim__srv__TeleportAbsolute_Event__Sequence * input,
  turtlesim__srv__TeleportAbsolute_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM__SRV__DETAIL__TELEPORT_ABSOLUTE__FUNCTIONS_H_
