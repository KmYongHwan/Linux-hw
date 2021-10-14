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
	{ 0x2d3385d3, "system_wq" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0xc10040e, "device_add_groups" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0x3b96fa46, "serio_unregister_driver" },
	{ 0x6c37f87, "ps2_handle_ack" },
	{ 0x7960eb77, "ps2_sendbyte" },
	{ 0x555fd164, "ps2_handle_response" },
	{ 0xcb4c07c9, "input_mt_report_finger_count" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x2901b4a8, "input_alloc_absinfo" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe9f065e6, "ps2_end_command" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xd7645c18, "i2c_for_each_dev" },
	{ 0x1b60b396, "__ps2_command" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbfc2c836, "i2c_verify_adapter" },
	{ 0x85df9b6c, "strsep" },
	{ 0x816b3ac4, "serio_interrupt" },
	{ 0x57d0a985, "i2c_new_probed_device" },
	{ 0x29ad8e33, "x86_hyper_type" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0xcde54150, "ps2_drain" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xff9513b5, "input_mt_report_pointer_emulation" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x5ada0011, "input_event" },
	{ 0xac48f8d7, "serio_unregister_child_port" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x61b38ed4, "__serio_register_driver" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xf006a2ef, "i2c_bus_type" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5a921311, "strncmp" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x224e3827, "input_mt_init_slots" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x22600440, "serio_close" },
	{ 0x16779475, "i2c_unregister_device" },
	{ 0x456d997d, "serio_open" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0xb4ec4b77, "i2c_adapter_type" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x438e6a40, "bus_register_notifier" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3255acdc, "ps2_command" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xff76d558, "input_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xa9dcba35, "pm_wakeup_dev_event" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x48ef57f4, "ps2_sliced_command" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7db78630, "input_mt_drop_unused" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7fed2efa, "ps2_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xadb6732e, "serio_reconnect" },
	{ 0x30c0c597, "__serio_register_port" },
	{ 0xbfa087b0, "device_remove_groups" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0x923927ca, "serio_rescan" },
	{ 0x95f1e7a8, "input_mt_report_slot_state" },
	{ 0x3132618e, "ps2_cmd_aborted" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe3f9339c, "input_mt_sync_frame" },
	{ 0xa6ae0ad7, "i2c_client_type" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5771e9ba, "bus_unregister_notifier" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x2a43a5e3, "ps2_begin_command" },
	{ 0x74b36a91, "input_mt_assign_slots" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("serio:ty01pr*id*ex*");
MODULE_ALIAS("serio:ty05pr*id*ex*");

MODULE_INFO(srcversion, "B860DAB44BF58E592DA16EB");
