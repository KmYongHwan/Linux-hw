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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x46ab6112, "skb_to_sgvec" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0x5c5f27a1, "xfrm_dev_resume" },
	{ 0xf4ab071, "xfrm_unregister_type" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xebd2b967, "ipv4_update_pmtu" },
	{ 0x9957e85d, "xfrm4_protocol_deregister" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x87b8798d, "sg_next" },
	{ 0xda1bc416, "pskb_put" },
	{ 0x6ae08e16, "skb_page_frag_refill" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x34c21374, "skb_cow_data" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0xcc032573, "xfrm_input_resume" },
	{ 0xfb578fc5, "memset" },
	{ 0xa1027c17, "skb_checksum" },
	{ 0xba312d7b, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x167ad61b, "xfrm_input" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xcd47e287, "crypto_aead_encrypt" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0x5a9ed457, "crypto_aead_setkey" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xdded2805, "xfrm_register_type" },
	{ 0xc6ed47a2, "xfrm_state_mtu" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xb0127f23, "ipv4_redirect" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0xdb57498d, "xfrm_output_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x61cfa3f3, "skb_pull_rcsum" },
	{ 0xfe90659f, "__xfrm_state_destroy" },
	{ 0x7ef618f7, "km_new_mapping" },
	{ 0x29e8c85e, "xfrm4_rcv" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x6c2b627a, "crypto_aead_decrypt" },
	{ 0xf65ac253, "xfrm4_protocol_register" },
	{ 0x95195e25, "crypto_aead_setauthsize" },
	{ 0x63344450, "crypto_alloc_aead" },
	{ 0x8e377f9e, "xfrm_state_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8ddcee7d, "___pskb_trim" },
	{ 0x31745b26, "__skb_ext_del" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0x3fa55769, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "9325FF34689242E4FD54DEE");
