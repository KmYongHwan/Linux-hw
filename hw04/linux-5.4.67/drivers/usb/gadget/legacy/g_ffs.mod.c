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
	{ 0x442639ef, "param_ops_uint" },
	{ 0x722a53d5, "param_ops_ushort" },
	{ 0x84972054, "param_ops_byte" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0xe6985db3, "ffs_name_dev" },
	{ 0xec92deed, "ffs_single_dev" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf1a6dfa1, "usb_composite_probe" },
	{ 0xe1d3b18c, "usb_remove_function" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4e167f0f, "usb_add_function" },
	{ 0xd2afaeb4, "usb_get_function" },
	{ 0xc5850110, "printk" },
	{ 0x1c8ac69d, "usb_composite_overwrite_options" },
	{ 0xdb7c6144, "usb_add_config" },
	{ 0x1f3ae49c, "usb_string_ids_tab" },
	{ 0x7264923d, "rndis_borrow_net" },
	{ 0x55d5485b, "gether_register_netdev" },
	{ 0xce334190, "gether_set_gadget" },
	{ 0xfb7b8701, "gether_set_dev_addr" },
	{ 0x9232d829, "gether_set_host_addr" },
	{ 0x4e2890c5, "gether_set_qmult" },
	{ 0x4f5c843d, "usb_get_function_instance" },
	{ 0x37a0cba, "kfree" },
	{ 0xc468ff97, "usb_put_function_instance" },
	{ 0x6cdc15e2, "usb_put_function" },
	{ 0xe254cec9, "usb_composite_unregister" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0xf720a60b, "module_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usb_f_fs,libcomposite,usb_f_rndis,u_ether");


MODULE_INFO(srcversion, "5A5A19DCA501474B6128BFD");
