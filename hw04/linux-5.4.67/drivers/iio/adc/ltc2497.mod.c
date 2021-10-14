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
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x984d22a0, "regulator_get_voltage" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x35c871dd, "i2c_smbus_write_byte" },
	{ 0x25e4c3be, "iio_map_array_register" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0x8f2b780b, "iio_map_array_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Clltc,ltc2497");
MODULE_ALIAS("of:N*T*Clltc,ltc2497C*");
MODULE_ALIAS("i2c:ltc2497");

MODULE_INFO(srcversion, "0629D9D3DA291C93FFCC29D");
