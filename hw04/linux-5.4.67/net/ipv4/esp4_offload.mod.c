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
	{ 0xd76445a2, "inet_del_offload" },
	{ 0x73b1a36a, "xfrm_unregister_type_offload" },
	{ 0x7074f983, "inet_add_offload" },
	{ 0xc5850110, "printk" },
	{ 0x5fec6550, "xfrm_register_type_offload" },
	{ 0x167ad61b, "xfrm_input" },
	{ 0x8e377f9e, "xfrm_state_lookup" },
	{ 0x9d7ee6d9, "secpath_set" },
	{ 0xb6077ea3, "xfrm_parse_spi" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x31745b26, "__skb_ext_del" },
	{ 0xd678aecf, "esp_output_tail" },
	{ 0x2124474, "ip_send_check" },
	{ 0x6d25ac64, "esp_output_head" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x222d8cd5, "inet_offloads" },
	{ 0x9828abda, "skb_mac_gso_segment" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x8ce68702, "esp_input_done2" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "esp4");


MODULE_INFO(srcversion, "AD5ADE7F4DF1FF88917143E");
