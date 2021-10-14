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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0xff76d558, "input_register_device" },
	{ 0x224e3827, "input_mt_init_slots" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3519e9c, "usb_alloc_coherent" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xe3f9339c, "input_mt_sync_frame" },
	{ 0x95f1e7a8, "input_mt_report_slot_state" },
	{ 0x5ada0011, "input_event" },
	{ 0x74b36a91, "input_mt_assign_slots" },
	{ 0x3c24030c, "usb_autopm_put_interface" },
	{ 0xc576c069, "usb_autopm_get_interface" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xc5850110, "printk" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x37a0cba, "kfree" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x3d26e2a5, "usb_free_coherent" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v05ACp0223d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0224d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0225d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0230d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0231d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0232d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0236d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0237d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0238d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp023Fd*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0240d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0241d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0242d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0243d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0244d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0245d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0246d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0247d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0249d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp024Ad*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp024Bd*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp024Cd*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp024Dd*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp024Ed*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0252d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0253d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0254d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0262d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0263d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0264d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0259d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp025Ad*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp025Bd*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0290d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0291d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0292d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0272d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0273d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0274d*dc*dsc*dp*ic03isc*ip02in*");

MODULE_INFO(srcversion, "0BB7AB5EB48AF28F1C4CD31");
