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
	{ 0x852036c1, "request_firmware_nowait" },
	{ 0x9113120c, "devm_kasprintf" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xe3f9339c, "input_mt_sync_frame" },
	{ 0xdbcf3e33, "touchscreen_report_pos" },
	{ 0x95f1e7a8, "input_mt_report_slot_state" },
	{ 0x5ada0011, "input_event" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xfd94814e, "complete_all" },
	{ 0xede283d, "release_firmware" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xff76d558, "input_register_device" },
	{ 0x224e3827, "input_mt_init_slots" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x155277eb, "touchscreen_parse_properties" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x2901b4a8, "input_alloc_absinfo" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xf82a295d, "gpiod_direction_input" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x12a38747, "usleep_range" },
	{ 0x30e70d02, "gpiod_direction_output" },
	{ 0x8cba6c0b, "devm_free_irq" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:GDIX1001:*");
MODULE_ALIAS("acpi*:GDIX1002:*");
MODULE_ALIAS("i2c:GDIX1001:00");

MODULE_INFO(srcversion, "B8E6EDC0033F56C007FE594");
