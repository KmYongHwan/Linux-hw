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
	{ 0x12a38747, "usleep_range" },
	{ 0x4a96006f, "gpiod_get_value" },
	{ 0xe3f9339c, "input_mt_sync_frame" },
	{ 0x95f1e7a8, "input_mt_report_slot_state" },
	{ 0x5ada0011, "input_event" },
	{ 0x74b36a91, "input_mt_assign_slots" },
	{ 0xcf9b558d, "touchscreen_set_mt_pos" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xf6ae4a4, "i2c_smbus_read_i2c_block_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xff76d558, "input_register_device" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x13d9b37d, "gpiod_set_consumer_name" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0x224e3827, "input_mt_init_slots" },
	{ 0x155277eb, "touchscreen_parse_properties" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x2bc97e5a, "device_property_present" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:bu21013_tp");

MODULE_INFO(srcversion, "B7F0E14B6767527AF6B965E");
