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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x32238c2c, "hid_unregister_driver" },
	{ 0xad148d9b, "__hid_register_driver" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0xf4358872, "devm_kfree" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xdcdb507e, "input_ff_create" },
	{ 0x6626afca, "down" },
	{ 0xcf2a6966, "up" },
	{ 0xc26bffc8, "hid_hw_start" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xfc1a2e89, "hid_open_report" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0xff76d558, "input_register_device" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x9113120c, "devm_kasprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xef5593c0, "power_supply_powers" },
	{ 0xcebeeb50, "devm_power_supply_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7f2dd6c6, "devm_kmemdup" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x8b13a8b8, "hid_snto32" },
	{ 0x9b962c3a, "hid_field_extract" },
	{ 0xe3f9339c, "input_mt_sync_frame" },
	{ 0x95f1e7a8, "input_mt_report_slot_state" },
	{ 0xfe9b3b60, "input_mt_get_slot_by_key" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdfb63d9a, "hid_report_raw_event" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6f280d75, "power_supply_changed" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0xc310b981, "strnstr" },
	{ 0x224e3827, "input_mt_init_slots" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0x2901b4a8, "input_alloc_absinfo" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x96848186, "scnprintf" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x3a0b85fb, "power_supply_get_drvdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5495392, "hid_debug" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xbd253f4c, "hid_hw_close" },
	{ 0xa68a7b33, "hid_hw_open" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc3578ee2, "hid_hw_stop" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0x5ada0011, "input_event" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid");

MODULE_ALIAS("hid:b0003g0102v0000046Dp00004011");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004101");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B00C");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00001017");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004010");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004050");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004007");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000402D");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000101B");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000406D");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000405E");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000404A");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B013");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B018");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B01F");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000406A");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004041");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004060");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004071");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004069");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000101A");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004024");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004002");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B305");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B30B");
MODULE_ALIAS("hid:b0003g0102v0000046Dp*");
MODULE_ALIAS("hid:b0003g0104v0000046Dp00000049");
MODULE_ALIAS("hid:b0003g0104v0000046Dp00000057");
MODULE_ALIAS("hid:b0003g0104v0000046Dp0000005C");
MODULE_ALIAS("hid:b0003g0104v0000046Dp000000FE");
MODULE_ALIAS("hid:b0003g0104v0000046Dp*");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C082");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C087");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C090");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C081");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C086");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C091");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C262");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C088");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B305");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B30B");

MODULE_INFO(srcversion, "E05803BDAE7ABCD8AE09BCF");
