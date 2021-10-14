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
	{ 0x669ccadb, "cryptd_ahash_queued" },
	{ 0xaa45c4bd, "shash_ahash_digest" },
	{ 0x7b4081ac, "crypto_stats_ahash_update" },
	{ 0x6a4178b2, "crypto_shash_final" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xf587fb54, "crypto_ahash_final" },
	{ 0x5d3ce2e, "crypto_ahash_digest" },
	{ 0x453d4109, "cryptd_shash_desc" },
	{ 0xd986dad1, "kernel_fpu_begin" },
	{ 0xda1fb5d6, "crypto_register_ahash" },
	{ 0xf4da941b, "crypto_unregister_shash" },
	{ 0xd7c75732, "crypto_register_shash" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xba7d3c48, "crypto_unregister_ahash" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6c7692c3, "cryptd_ahash_child" },
	{ 0x7e8685, "crypto_ahash_setkey" },
	{ 0xd46156bf, "shash_ahash_update" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0x74ca4843, "crypto_stats_get" },
	{ 0x2641bc45, "cryptd_alloc_ahash" },
	{ 0x6425716c, "cryptd_free_ahash" },
	{ 0x8303ac5, "x86_match_cpu" },
};

MODULE_INFO(depends, "cryptd");

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0081*");

MODULE_INFO(srcversion, "E0A5C143DA1C0BE9375FD6D");
