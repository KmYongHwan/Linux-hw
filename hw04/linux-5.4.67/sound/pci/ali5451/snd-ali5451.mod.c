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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xb0e024fe, "snd_ac97_write" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x6dab80b0, "snd_pcm_period_elapsed" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xc4142837, "seq_printf" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xd50f4cb9, "snd_device_new" },
	{ 0xda0385c8, "snd_pcm_hw_constraint_list" },
	{ 0x858d6bdd, "snd_pcm_set_ops" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x24595cf6, "snd_pcm_lib_free_pages" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x17e7d2e9, "snd_pcm_lib_ioctl" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x876c2483, "snd_ctl_boolean_mono_info" },
	{ 0x7aeafe04, "snd_pcm_lib_malloc_pages" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xacc21c79, "snd_ac97_suspend" },
	{ 0x65523885, "snd_card_new" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x9068ffbd, "snd_ctl_new1" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xc06eefaf, "snd_pcm_set_sync" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfe17dcab, "snd_ac97_bus" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x9afcdd42, "snd_ac97_mixer" },
	{ 0x16cc630c, "snd_card_rw_proc_new" },
	{ 0x37a0cba, "kfree" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xa61aa028, "snd_pcm_format_unsigned" },
	{ 0x605adfe9, "snd_pcm_hw_constraint_minmax" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0xee86698c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x68a57338, "snd_card_free" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0xb5752134, "snd_pcm_new" },
	{ 0x27ad78fd, "snd_ac97_resume" },
	{ 0x5eca2bac, "snd_ctl_add" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-pcm,snd-ac97-codec,snd");

MODULE_ALIAS("pci:v000010B9d00005451sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C93EC9CE43943B8C02628CF");
