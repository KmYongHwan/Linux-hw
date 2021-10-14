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
	{ 0x3f1d7510, "fb_sys_read" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x20d65e40, "fb_find_nearest_mode" },
	{ 0xdffc80fc, "vesa_modes" },
	{ 0x12cbb16d, "register_framebuffer" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x12f6f69c, "fb_videomode_to_var" },
	{ 0xfdcc8a0e, "fb_find_best_display" },
	{ 0xee58e970, "fb_add_videomode" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x75571bf5, "framebuffer_alloc" },
	{ 0x3519e9c, "usb_alloc_coherent" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc4c503e9, "fb_deferred_io_cleanup" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0xb03729ed, "framebuffer_release" },
	{ 0xc9561772, "fb_destroy_modelist" },
	{ 0x999e8297, "vfree" },
	{ 0xc07b0863, "fb_destroy_modedb" },
	{ 0x2620a062, "unregister_framebuffer" },
	{ 0xe82c0073, "fb_deferred_io_init" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xf9a482f9, "msleep" },
	{ 0x96c17136, "fb_var_to_videomode" },
	{ 0xcf2bd7dd, "fb_sys_write" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x2ca9c8c8, "sys_fillrect" },
	{ 0xd20419ad, "sys_copyarea" },
	{ 0xbee25412, "sys_imageblit" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfb578fc5, "memset" },
	{ 0x92e683f5, "down_timeout" },
	{ 0xc5850110, "printk" },
	{ 0xcf2a6966, "up" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5d597b48, "remap_pfn_range" },
	{ 0x3744cf36, "vmalloc_to_pfn" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x3d26e2a5, "usb_free_coherent" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fb_sys_fops,sysfillrect,syscopyarea,sysimgblt");

MODULE_ALIAS("usb:v0424p9D00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9D01d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0CE722C5802C01361C5DF2C");
