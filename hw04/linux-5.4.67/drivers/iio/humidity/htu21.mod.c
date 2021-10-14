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
	{ 0x2ab78bf3, "ms_sensors_show_battery_low" },
	{ 0xb10fe8c4, "ms_sensors_show_heater" },
	{ 0x5581d598, "ms_sensors_write_heater" },
	{ 0xf3479800, "ms_sensors_ht_read_temperature" },
	{ 0x7c063cdd, "ms_sensors_ht_read_humidity" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb83b5bc9, "ms_sensors_write_resolution" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x80f7ee42, "__devm_iio_device_register" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x346a85de, "ms_sensors_read_serial" },
	{ 0x2d2f5cd5, "ms_sensors_reset" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,ms_sensors_i2c");

MODULE_ALIAS("of:N*T*Cmeas,htu21");
MODULE_ALIAS("of:N*T*Cmeas,htu21C*");
MODULE_ALIAS("of:N*T*Cmeas,ms8607-humidity");
MODULE_ALIAS("of:N*T*Cmeas,ms8607-humidityC*");
MODULE_ALIAS("i2c:htu21");
MODULE_ALIAS("i2c:ms8607-humidity");

MODULE_INFO(srcversion, "740C3A0ED543D013BCAD658");
