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
	{ 0x91d2edfd, "tcf_register_action" },
	{ 0xc5850110, "printk" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x599e08a0, "tcf_idr_search" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8e7681e6, "tcf_idr_insert" },
	{ 0x1fa7d8ef, "__tcf_idr_release" },
	{ 0xafb160cd, "tcf_idr_cleanup" },
	{ 0xcf73736b, "tcf_idr_create" },
	{ 0x10dd7f6d, "tcf_chain_put_by_act" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x27842940, "tcf_action_set_ctrlact" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xac9fda7, "tcf_action_check_ctrlact" },
	{ 0x27a1ece4, "tcf_idr_check_alloc" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xf95d45e9, "tcf_generic_walker" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0xc8fab62b, "tcf_idrinfo_destroy" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0AA1FD47EF7B83A3D600878");
