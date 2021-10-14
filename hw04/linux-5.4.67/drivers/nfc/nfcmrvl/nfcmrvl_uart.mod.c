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
	{ 0xfe4752a0, "nfcmrvl_nci_unregister_dev" },
	{ 0x25e9cbaa, "nfcmrvl_nci_recv_frame" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xde97e988, "nci_uart_set_config" },
	{ 0xc5850110, "printk" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x233f20fc, "nfcmrvl_nci_register_dev" },
	{ 0xac19dda5, "nci_uart_unregister" },
	{ 0x97d2bdbe, "nci_uart_register" },
	{ 0x442639ef, "param_ops_uint" },
};

MODULE_INFO(depends, "nfcmrvl,nci_uart");


MODULE_INFO(srcversion, "4D370DFC94A8F549D7F8686");
