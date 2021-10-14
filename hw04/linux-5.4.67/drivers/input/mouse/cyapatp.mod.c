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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0x754d539c, "strlen" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xf6ae4a4, "i2c_smbus_read_i2c_block_data" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x2901b4a8, "input_alloc_absinfo" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x5ada0011, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfb6eedf9, "power_group_name" },
	{ 0x1e50ff17, "sysfs_merge_group" },
	{ 0x224e3827, "input_mt_init_slots" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x3bcc4fb8, "sysfs_unmerge_group" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0xc946d02b, "i2c_smbus_xfer" },
	{ 0x756785cc, "i2c_smbus_read_block_data" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xff76d558, "input_register_device" },
	{ 0xa9dcba35, "pm_wakeup_dev_event" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0x923438df, "devm_device_add_group" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x95f1e7a8, "input_mt_report_slot_state" },
	{ 0x96848186, "scnprintf" },
	{ 0x71deb539, "request_firmware" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0xe3f9339c, "input_mt_sync_frame" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x5aeff885, "i2c_smbus_write_i2c_block_data" },
	{ 0x29361773, "complete" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xede283d, "release_firmware" },
	{ 0x1fa8ea04, "regulator_enable" },
};

MODULE_INFO(depends, "crc-itu-t");

MODULE_ALIAS("acpi*:CYAP0000:*");
MODULE_ALIAS("acpi*:CYAP0001:*");
MODULE_ALIAS("acpi*:CYAP0002:*");
MODULE_ALIAS("i2c:cyapa");

MODULE_INFO(srcversion, "AC30D18DCD18C9C272DC60A");
