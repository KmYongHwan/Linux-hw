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
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x95f1e7a8, "input_mt_report_slot_state" },
	{ 0x5ada0011, "input_event" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x923438df, "devm_device_add_group" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xff76d558, "input_register_device" },
	{ 0x224e3827, "input_mt_init_slots" },
	{ 0x155277eb, "touchscreen_parse_properties" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0xf45bf890, "devm_regulator_bulk_get" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2f4e42e1, "i2c_smbus_write_word_data" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0xf6ae4a4, "i2c_smbus_read_i2c_block_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0x59f91a4d, "regulator_bulk_enable" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x35c871dd, "i2c_smbus_write_byte" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x8cf22ace, "regulator_bulk_disable" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:s6sy761");

MODULE_INFO(srcversion, "8BBEB50A964501AF67A3381");
