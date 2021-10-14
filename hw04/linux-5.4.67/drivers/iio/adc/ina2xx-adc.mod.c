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
	{ 0xad6318ed, "iio_read_const_attr" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0xbb9a2e75, "iio_device_attach_buffer" },
	{ 0xcc80f31e, "devm_iio_kfifo_allocate" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x4dce7dd4, "iio_format_value" },
	{ 0x26f6b499, "iio_str_to_fixpoint" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x12a38747, "usleep_range" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0xf6ffcfd0, "iio_push_to_buffers" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x932664f1, "iio_get_time_ns" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x5c84462b, "__put_task_struct" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,kfifo_buf");

MODULE_ALIAS("of:N*T*Cti,ina219");
MODULE_ALIAS("of:N*T*Cti,ina219C*");
MODULE_ALIAS("of:N*T*Cti,ina220");
MODULE_ALIAS("of:N*T*Cti,ina220C*");
MODULE_ALIAS("of:N*T*Cti,ina226");
MODULE_ALIAS("of:N*T*Cti,ina226C*");
MODULE_ALIAS("of:N*T*Cti,ina230");
MODULE_ALIAS("of:N*T*Cti,ina230C*");
MODULE_ALIAS("of:N*T*Cti,ina231");
MODULE_ALIAS("of:N*T*Cti,ina231C*");
MODULE_ALIAS("i2c:ina219");
MODULE_ALIAS("i2c:ina220");
MODULE_ALIAS("i2c:ina226");
MODULE_ALIAS("i2c:ina230");
MODULE_ALIAS("i2c:ina231");

MODULE_INFO(srcversion, "E0EE781677632AE099E5EED");
