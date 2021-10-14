#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x588f0134, "iio_enum_available_read" },
	{ 0x6ec70757, "iio_enum_write" },
	{ 0x51c6dcb2, "iio_enum_read" },
	{ 0xee526d0f, "counter_count_mode_str" },
	{ 0x23e9db33, "counter_signal_enum_available_read" },
	{ 0xe9926f32, "counter_signal_enum_write" },
	{ 0xba291d1d, "counter_signal_enum_read" },
	{ 0x122bc1f1, "counter_count_enum_available_read" },
	{ 0xe936ee39, "counter_count_enum_write" },
	{ 0xda3c7521, "counter_count_enum_read" },
	{ 0x132c593a, "isa_unregister_driver" },
	{ 0xb0ab8c89, "isa_register_driver" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3feccbbf, "counter_signal_read_value_set" },
	{ 0xf79abbb2, "counter_count_read_value_set" },
	{ 0xb4f0aea, "counter_count_write_value_get" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x1aab51b, "counter_count_direction_str" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x831f5566, "devm_counter_register" },
	{ 0x80f7ee42, "__devm_iio_device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xfef6ccb5, "__devm_request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,counter");


MODULE_INFO(srcversion, "25955B5712201DE7C1A30A2");
