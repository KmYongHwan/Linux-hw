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
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x35c871dd, "i2c_smbus_write_byte" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xff76d558, "input_register_device" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x155277eb, "touchscreen_parse_properties" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5ada0011, "input_event" },
	{ 0xdbcf3e33, "touchscreen_report_pos" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf6ae4a4, "i2c_smbus_read_i2c_block_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:bu21029");

MODULE_INFO(srcversion, "3C9D706D7F0F6E3BB92F677");
