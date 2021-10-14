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
	{ 0xad43e523, "crypto_blkcipher_type" },
	{ 0xf24963f2, "crypto_unregister_alg" },
	{ 0x77cc64fa, "crypto_register_alg" },
	{ 0xc5850110, "printk" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8303ac5, "x86_match_cpu" },
	{ 0xee86bd09, "cpu_info" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0xda45aa7e, "blkcipher_walk_done" },
	{ 0x473e373d, "blkcipher_walk_virt" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*00A6*");

MODULE_INFO(srcversion, "B4D6ABFD7C06C054ED0CAEB");
