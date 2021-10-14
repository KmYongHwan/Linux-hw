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
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x71deb539, "request_firmware" },
	{ 0x852036c1, "request_firmware_nowait" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0xff76d558, "input_register_device" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xce42315c, "usb_driver_release_interface" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0x3519e9c, "usb_alloc_coherent" },
	{ 0xeee83d72, "usb_driver_claim_interface" },
	{ 0x53801be1, "usb_ifnum_to_if" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xede283d, "release_firmware" },
	{ 0xfd7ccba2, "sysfs_notify" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x29361773, "complete" },
	{ 0x5ada0011, "input_event" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x37a0cba, "kfree" },
	{ 0x3d26e2a5, "usb_free_coherent" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfb578fc5, "memset" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xa916b694, "strnlen" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x2ba2c9cb, "usb_bulk_msg" },
	{ 0x96848186, "scnprintf" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6969A454F2CA55B8802FA62");
