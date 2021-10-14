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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb3ade458, "rc_unregister_device" },
	{ 0x7129e5f8, "hex_asc" },
	{ 0x272ba86, "generic_file_llseek" },
	{ 0xfc1a2e89, "hid_open_report" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x70691c99, "single_open" },
	{ 0x754d539c, "strlen" },
	{ 0xb03729ed, "framebuffer_release" },
	{ 0xa071f2c6, "single_release" },
	{ 0x3f1d7510, "fb_sys_read" },
	{ 0xc973710c, "backlight_device_register" },
	{ 0xc4142837, "seq_printf" },
	{ 0xcd34c3c2, "__hid_request" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0xd20419ad, "sys_copyarea" },
	{ 0xcec6343e, "seq_read" },
	{ 0xe381324, "rc_allocate_device" },
	{ 0xd8e04007, "hid_debug_event" },
	{ 0x5495392, "hid_debug" },
	{ 0x5ada0011, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xe93af497, "rc_free_device" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xbd253f4c, "hid_hw_close" },
	{ 0x12cbb16d, "register_framebuffer" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0x1e1c22e8, "rc_register_device" },
	{ 0xa68a7b33, "hid_hw_open" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdc109acf, "lcd_device_unregister" },
	{ 0x5923df6a, "hid_set_field" },
	{ 0x7d22f0d5, "simple_open" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0x335bbcdd, "hid_alloc_report_buf" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x2ca9c8c8, "sys_fillrect" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xff76d558, "input_register_device" },
	{ 0xbee25412, "sys_imageblit" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xcf2bd7dd, "fb_sys_write" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xc3578ee2, "hid_hw_stop" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x75571bf5, "framebuffer_alloc" },
	{ 0xc4c503e9, "fb_deferred_io_cleanup" },
	{ 0xe82c0073, "fb_deferred_io_init" },
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0x13874e17, "lcd_device_register" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0xad148d9b, "__hid_register_driver" },
	{ 0x8f226906, "ir_raw_event_store" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc26bffc8, "hid_hw_start" },
	{ 0x32238c2c, "hid_unregister_driver" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe7ccd3bc, "backlight_device_unregister" },
	{ 0x1907fe72, "ir_raw_event_handle" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc40fa4ac, "hid_output_report" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0x2620a062, "unregister_framebuffer" },
};

MODULE_INFO(depends, "rc-core,hid,fb_sys_fops,syscopyarea,lcd,sysfillrect,sysimgblt");

MODULE_ALIAS("hid:b0003g*v000004D8p0000C002");
MODULE_ALIAS("hid:b0003g*v000004D8p0000F002");

MODULE_INFO(srcversion, "E0BA89E61D821245FAAE434");
