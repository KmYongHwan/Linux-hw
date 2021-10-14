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
	{ 0x5e7600f8, "tcf_unregister_action" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x91d2edfd, "tcf_register_action" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xafb160cd, "tcf_idr_cleanup" },
	{ 0x1fa7d8ef, "__tcf_idr_release" },
	{ 0x8e7681e6, "tcf_idr_insert" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x10dd7f6d, "tcf_chain_put_by_act" },
	{ 0x27842940, "tcf_action_set_ctrlact" },
	{ 0xf6523542, "dev_get_by_index" },
	{ 0xac9fda7, "tcf_action_check_ctrlact" },
	{ 0xcf73736b, "tcf_idr_create" },
	{ 0x27a1ece4, "tcf_idr_check_alloc" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x349cba85, "strchr" },
	{ 0xc5850110, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2d5f37, "dev_queue_xmit" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0x61cfa3f3, "skb_pull_rcsum" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x599e08a0, "tcf_idr_search" },
	{ 0xf95d45e9, "tcf_generic_walker" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0xc8fab62b, "tcf_idrinfo_destroy" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F6CF8AFF818EF3EBD9F2563");
