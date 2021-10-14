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
	{ 0x277a6037, "hid_add_device" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd36760ef, "__usb_get_extra_descriptor" },
	{ 0xfa355613, "hid_quirks_init" },
	{ 0x754d539c, "strlen" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xbf0837a6, "hid_parse_report" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0xa1bb3cd0, "usb_deregister_dev" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xdcdb507e, "input_ff_create" },
	{ 0xcd34c3c2, "__hid_request" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc576c069, "usb_autopm_get_interface" },
	{ 0x999e8297, "vfree" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0xb7b2845b, "usb_unlink_urb" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5495392, "hid_debug" },
	{ 0x12fa8db6, "hid_input_report" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x1a3a72e0, "usb_block_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x4d7cadaa, "usb_string" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x19d52f1f, "hid_quirks_exit" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xbd253f4c, "hid_hw_close" },
	{ 0x706ccad, "usb_autopm_put_interface_async" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7e0954a8, "usb_unpoison_urb" },
	{ 0x2864d614, "fasync_helper" },
	{ 0xb959e6e3, "hid_check_keys_pressed" },
	{ 0x81b2f3c5, "usb_register_dev" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0xa68a7b33, "hid_hw_open" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6626afca, "down" },
	{ 0x752832c, "noop_llseek" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x5923df6a, "hid_set_field" },
	{ 0x3d26e2a5, "usb_free_coherent" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x335bbcdd, "hid_alloc_report_buf" },
	{ 0x1f37da0c, "usb_queue_reset_device" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x2a9b4f39, "usb_autopm_get_interface_async" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x13f99d62, "usb_clear_halt" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9b4eab8b, "usb_find_interface" },
	{ 0x583a430e, "usb_interrupt_msg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x387c599f, "hid_destroy_device" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x32ea5ef6, "hid_allocate_device" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc6c6ab3, "usb_autopm_get_interface_no_resume" },
	{ 0x82b75d91, "usb_autopm_put_interface_no_suspend" },
	{ 0x389fc6fa, "hidinput_count_leds" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0xcf2a6966, "up" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x4d5f3b25, "kill_fasync" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3519e9c, "usb_alloc_coherent" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3c24030c, "usb_autopm_put_interface" },
	{ 0x34f20df7, "device_set_wakeup_enable" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0x913df3bc, "hid_lookup_quirk" },
	{ 0xc40fa4ac, "hid_output_report" },
};

MODULE_INFO(depends, "hid");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic03isc*ip*in*");

MODULE_INFO(srcversion, "11616376D5A5DEE35480CDF");
