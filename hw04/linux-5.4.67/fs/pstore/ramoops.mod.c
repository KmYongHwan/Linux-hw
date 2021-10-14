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
	{ 0x85bd1608, "__request_region" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x7e5db80b, "pstore_name_to_type" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x2ed9df85, "pstore_unregister" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3d32ae7, "platform_device_register_full" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x6c23f4ef, "free_rs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0xfb578fc5, "memset" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0x56530b5c, "vmap" },
	{ 0xa94a09bb, "mem_section" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x38861500, "init_rs_gfp" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x96848186, "scnprintf" },
	{ 0xd507ff69, "pstore_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x65f24eea, "decode_rs8" },
	{ 0x74f14b6c, "encode_rs8" },
	{ 0x74801e4, "param_ops_ulong" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x1f95edd, "param_ops_ullong" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "reed_solomon");


MODULE_INFO(srcversion, "6EFC132BADBEE8B01496592");
