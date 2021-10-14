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
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x95f1e7a8, "input_mt_report_slot_state" },
	{ 0x5ada0011, "input_event" },
	{ 0x29361773, "complete" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0xb01eade3, "devm_regulator_put" },
	{ 0xe67878c0, "devm_led_classdev_register_ext" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x923438df, "devm_device_add_group" },
	{ 0xff76d558, "input_register_device" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0x59f91a4d, "regulator_bulk_enable" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x224e3827, "input_mt_init_slots" },
	{ 0x2bc97e5a, "device_property_present" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x155277eb, "touchscreen_parse_properties" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0xf45bf890, "devm_regulator_bulk_get" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x63d98d0f, "regulator_is_enabled" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0xf6ae4a4, "i2c_smbus_read_i2c_block_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x8cf22ace, "regulator_bulk_disable" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x35c871dd, "i2c_smbus_write_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:stmfts");

MODULE_INFO(srcversion, "816778D27BAF1C4031967ED");
