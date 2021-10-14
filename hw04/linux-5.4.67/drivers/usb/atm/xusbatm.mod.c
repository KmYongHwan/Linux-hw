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
	{ 0x722a53d5, "param_ops_ushort" },
	{ 0x84972054, "param_ops_byte" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0xcae09d, "usbatm_usb_disconnect" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x6ca935a7, "usb_set_interface" },
	{ 0xeee83d72, "usb_driver_claim_interface" },
	{ 0xa6c77a72, "usb_altnum_to_altsetting" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xce42315c, "usb_driver_release_interface" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc8aedd9, "usbatm_usb_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbatm");


MODULE_INFO(srcversion, "8874015DD65844BE4130A67");
