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
	{ 0x6fc554c9, "iio_trigger_notify_done" },
	{ 0xf6ffcfd0, "iio_push_to_buffers" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x8b278a1a, "iio_triggered_buffer_setup" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x984d22a0, "regulator_get_voltage" },
	{ 0x4fc91a1f, "devm_regulator_get_optional" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0x25e4c3be, "iio_map_array_register" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0x35c871dd, "i2c_smbus_write_byte" },
	{ 0xa1799421, "i2c_smbus_read_byte" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb22c11af, "iio_push_event" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x932664f1, "iio_get_time_ns" },
	{ 0x8f2b780b, "iio_map_array_unregister" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x730aa4, "iio_triggered_buffer_cleanup" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("i2c:max1361");
MODULE_ALIAS("i2c:max1362");
MODULE_ALIAS("i2c:max1363");
MODULE_ALIAS("i2c:max1364");
MODULE_ALIAS("i2c:max1036");
MODULE_ALIAS("i2c:max1037");
MODULE_ALIAS("i2c:max1038");
MODULE_ALIAS("i2c:max1039");
MODULE_ALIAS("i2c:max1136");
MODULE_ALIAS("i2c:max1137");
MODULE_ALIAS("i2c:max1138");
MODULE_ALIAS("i2c:max1139");
MODULE_ALIAS("i2c:max1236");
MODULE_ALIAS("i2c:max1237");
MODULE_ALIAS("i2c:max1238");
MODULE_ALIAS("i2c:max1239");
MODULE_ALIAS("i2c:max11600");
MODULE_ALIAS("i2c:max11601");
MODULE_ALIAS("i2c:max11602");
MODULE_ALIAS("i2c:max11603");
MODULE_ALIAS("i2c:max11604");
MODULE_ALIAS("i2c:max11605");
MODULE_ALIAS("i2c:max11606");
MODULE_ALIAS("i2c:max11607");
MODULE_ALIAS("i2c:max11608");
MODULE_ALIAS("i2c:max11609");
MODULE_ALIAS("i2c:max11610");
MODULE_ALIAS("i2c:max11611");
MODULE_ALIAS("i2c:max11612");
MODULE_ALIAS("i2c:max11613");
MODULE_ALIAS("i2c:max11614");
MODULE_ALIAS("i2c:max11615");
MODULE_ALIAS("i2c:max11616");
MODULE_ALIAS("i2c:max11617");
MODULE_ALIAS("i2c:max11644");
MODULE_ALIAS("i2c:max11645");
MODULE_ALIAS("i2c:max11646");
MODULE_ALIAS("i2c:max11647");

MODULE_INFO(srcversion, "F910536855FF4F5263FD330");
