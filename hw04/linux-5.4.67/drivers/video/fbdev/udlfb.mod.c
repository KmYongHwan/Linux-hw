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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x4d554f05, "device_create_bin_file" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0x12cbb16d, "register_framebuffer" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x3519e9c, "usb_alloc_coherent" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x3f1d7510, "fb_sys_read" },
	{ 0x75571bf5, "framebuffer_alloc" },
	{ 0xd36760ef, "__usb_get_extra_descriptor" },
	{ 0x933788bc, "usb_get_descriptor" },
	{ 0xcf48f6f8, "usb_get_dev" },
	{ 0x2620a062, "unregister_framebuffer" },
	{ 0x9171054c, "device_remove_bin_file" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x3d26e2a5, "usb_free_coherent" },
	{ 0x6626afca, "down" },
	{ 0x20d65e40, "fb_find_nearest_mode" },
	{ 0xdffc80fc, "vesa_modes" },
	{ 0x12f6f69c, "fb_videomode_to_var" },
	{ 0xfdcc8a0e, "fb_find_best_display" },
	{ 0xee58e970, "fb_add_videomode" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0xcf2bd7dd, "fb_sys_write" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfb578fc5, "memset" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x92e683f5, "down_timeout" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0xb03729ed, "framebuffer_release" },
	{ 0xdd140424, "usb_put_dev" },
	{ 0xc9561772, "fb_destroy_modelist" },
	{ 0x999e8297, "vfree" },
	{ 0xc07b0863, "fb_destroy_modedb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96c17136, "fb_var_to_videomode" },
	{ 0xe82c0073, "fb_deferred_io_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xc4c503e9, "fb_deferred_io_cleanup" },
	{ 0x2ca9c8c8, "sys_fillrect" },
	{ 0xd20419ad, "sys_copyarea" },
	{ 0xbee25412, "sys_imageblit" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x5d597b48, "remap_pfn_range" },
	{ 0x3744cf36, "vmalloc_to_pfn" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xcf2a6966, "up" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fb_sys_fops,sysfillrect,syscopyarea,sysimgblt");

MODULE_ALIAS("usb:v17E9p*d*dc*dsc*dp*icFFisc00ip00in*");

MODULE_INFO(srcversion, "7DBFD2A27B24702D870455F");
